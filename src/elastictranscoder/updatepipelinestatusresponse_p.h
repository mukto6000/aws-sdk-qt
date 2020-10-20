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

#ifndef QTAWS_UPDATEPIPELINESTATUSRESPONSE_P_H
#define QTAWS_UPDATEPIPELINESTATUSRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineStatusResponse;

class QTAWS_EXPORT UpdatePipelineStatusResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    UpdatePipelineStatusResponsePrivate(UpdatePipelineStatusResponse * const q);

    void parseUpdatePipelineStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineStatusResponse)
    Q_DISABLE_COPY(UpdatePipelineStatusResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
