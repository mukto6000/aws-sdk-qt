/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_ASSOCIATEENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_ASSOCIATEENCRYPTIONCONFIGRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace EKS {

class AssociateEncryptionConfigResponse;

class QTAWS_EXPORT AssociateEncryptionConfigResponsePrivate : public EksResponsePrivate {

public:

    AssociateEncryptionConfigResponsePrivate(AssociateEncryptionConfigResponse * const q);

    void parseAssociateEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateEncryptionConfigResponse)
    Q_DISABLE_COPY(AssociateEncryptionConfigResponsePrivate)

};

} // namespace EKS
} // namespace QtAws

#endif