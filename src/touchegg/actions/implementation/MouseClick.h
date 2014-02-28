/**
 * @file /src/touchegg/actions/implementation/MouseClick.h
 *
 * This file is part of Touchégg.
 *
 * Touchégg is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License  as  published by  the  Free Software
 * Foundation,  either version 2 of the License,  or (at your option)  any later
 * version.
 *
 * Touchégg is distributed in the hope that it will be useful,  but  WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the  GNU General Public License  for more details.
 *
 * You should have received a copy of the  GNU General Public License along with
 * Touchégg. If not, see <http://www.gnu.org/licenses/>.
 *
 * @author José Expósito <jose.exposito89@gmail.com> (C) 2011 - 2012
 * @class  MouseClick
 */
#ifndef LEFTBUTTONCLICK_H
#define LEFTBUTTONCLICK_H

#include "src/touchegg/util/Include.h"
#include "src/touchegg/actions/implementation/Action.h"

/**
 * Emulates a click with the mouse.
 */
class MouseClick : public Action
{

public:

    MouseClick(const QString &settings, Window window, ActionTypeEnum::ActionType type);

    void executeStart(const QHash<QString, QVariant>& attrs);

    void executeUpdate(const QHash<QString, QVariant>& attrs);

    void executeFinish(const QHash<QString, QVariant>& attrs);

private:

    /**
     * Button to emulate.
     */
    int button;
    
    /**
     *  Boolean to check click status.
     */
    bool sending_click;

};
#endif // LEFTBUTTONCLICK_H
