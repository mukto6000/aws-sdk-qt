// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBRESPONSE_H
#define QTAWS_DELETEJOBRESPONSE_H

#include "iotresponse.h"
#include "deletejobrequest.h"

namespace QtAws {
namespace IoT {

class DeleteJobResponsePrivate;

class QTAWSIOT_EXPORT DeleteJobResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteJobResponse(const DeleteJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobResponse)
    Q_DISABLE_COPY(DeleteJobResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
