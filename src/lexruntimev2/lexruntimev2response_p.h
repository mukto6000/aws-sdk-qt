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

#ifndef QTAWS_LEXRUNTIMEV2RESPONSE_P_H
#define QTAWS_LEXRUNTIMEV2RESPONSE_P_H

namespace QtAws {
namespace LexRuntimeV2 {

class LexRuntimeV2Response;

class LexRuntimeV2ResponsePrivate {

public:

    explicit LexRuntimeV2ResponsePrivate(LexRuntimeV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

protected:
    LexRuntimeV2Response * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(LexRuntimeV2Response)
    Q_DISABLE_COPY(LexRuntimeV2ResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
