//
// Copyright (c) 2018 potato-framework by Loïc Boutter (https://github.com/Lo-X/potato-framework)
//
// Everyone is permitted to copy and distribute verbatim or modified
// copies of this license document, and changing it is allowed as long
// as the name is changed.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
//
//  0. You just DO WHAT THE FUCK YOU WANT TO.
//

#ifndef PARTICLENODE_H
#define PARTICLENODE_H

#include <SFML/Graphics/VertexArray.hpp>

#include <deque>
#include <vector>

#include <entities/scenenode.hpp>
#include <events/commandqueue.hpp>
#include <resources/affectors.hpp>
#include <resources/particle.hpp>
#include <resources/resourceholder.hpp>
#include <resources/resourceidentifiers.hpp>

class ParticleNode : public SceneNode
{
public:
    ParticleNode(Particle::Type type, const TextureHolder& textures);

    void addParticle(sf::Vector2f position);
    Particle::Type getParticleType() const;

private:
    virtual void updateCurrent(sf::Time dt, CommandQueue& commands);
    virtual void drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;

    void addVertex(float worldX, float worldY, float texCoordX, float texCoordY, const sf::Color& color) const;
    void computeVertices() const;

    void addAffector(std::function<void(Particle&, sf::Time)> affector);

private:
    typedef std::function<void(Particle&, sf::Time)> Affector;

private:
    std::deque<Particle>  mParticles;
    std::vector<Affector> mAffectors;
    const sf::Texture&    mTexture;
    Particle::Type        mType;

    mutable sf::VertexArray mVertexArray;
    mutable bool            mNeedsVertexUpdate;
};

#endif // PARTICLENODE_H
