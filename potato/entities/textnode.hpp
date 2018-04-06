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

#ifndef TEXTNODE_H
#define TEXTNODE_H

#include <string>

#include <entities/scenenode.hpp>
#include <resources/resourceholder.hpp>
#include <resources/resourceidentifiers.hpp>

class TextNode : public SceneNode
{
public:
    TextNode(const std::string& text, const FontHolder& fonts);

    void setText(const std::string& text);

private:
    virtual void drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;

private:
    sf::Text mText;
};

#endif // TEXTNODE_H
