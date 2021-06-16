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

#ifndef QTAWS_CANCELSIGNINGPROFILERESPONSE_P_H
#define QTAWS_CANCELSIGNINGPROFILERESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace signer {

class CancelSigningProfileResponse;

class QTAWS_EXPORT CancelSigningProfileResponsePrivate : public signerResponsePrivate {

public:

    CancelSigningProfileResponsePrivate(CancelSigningProfileResponse * const q);

    void parseCancelSigningProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelSigningProfileResponse)
    Q_DISABLE_COPY(CancelSigningProfileResponsePrivate)

};

} // namespace signer
} // namespace QtAws

#endif
