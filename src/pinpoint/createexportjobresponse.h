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

#ifndef QTAWS_CREATEEXPORTJOBRESPONSE_H
#define QTAWS_CREATEEXPORTJOBRESPONSE_H

#include "pinpointresponse.h"
#include "createexportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateExportJobResponsePrivate;

class QTAWS_EXPORT CreateExportJobResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateExportJobResponse(const CreateExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExportJobResponse)
    Q_DISABLE_COPY(CreateExportJobResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
