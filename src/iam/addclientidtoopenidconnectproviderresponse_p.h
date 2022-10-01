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

#ifndef QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERRESPONSE_P_H
#define QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class AddClientIDToOpenIDConnectProviderResponse;

class AddClientIDToOpenIDConnectProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit AddClientIDToOpenIDConnectProviderResponsePrivate(AddClientIDToOpenIDConnectProviderResponse * const q);

    void parseAddClientIDToOpenIDConnectProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddClientIDToOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(AddClientIDToOpenIDConnectProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
