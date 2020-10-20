/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MODIFYDBSUBNETGROUPRESPONSE_P_H
#define QTAWS_MODIFYDBSUBNETGROUPRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDB {

class ModifyDBSubnetGroupResponse;

class QTAWS_EXPORT ModifyDBSubnetGroupResponsePrivate : public DocDBResponsePrivate {

public:

    ModifyDBSubnetGroupResponsePrivate(ModifyDBSubnetGroupResponse * const q);

    void parseModifyDBSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyDBSubnetGroupResponsePrivate)

};

} // namespace DocDB
} // namespace QtAws

#endif