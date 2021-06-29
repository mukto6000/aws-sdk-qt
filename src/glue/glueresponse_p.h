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

#ifndef QTAWS_GLUERESPONSE_P_H
#define QTAWS_GLUERESPONSE_P_H

namespace QtAws {
namespace Glue {

class GlueResponse;

class GlueResponsePrivate {

public:

    explicit GlueResponsePrivate(GlueResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

protected:
    GlueResponse * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(GlueResponse)
    Q_DISABLE_COPY(GlueResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
