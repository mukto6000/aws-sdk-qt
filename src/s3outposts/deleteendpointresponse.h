// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTRESPONSE_H
#define QTAWS_DELETEENDPOINTRESPONSE_H

#include "s3outpostsresponse.h"
#include "deleteendpointrequest.h"

namespace QtAws {
namespace S3Outposts {

class DeleteEndpointResponsePrivate;

class QTAWSS3OUTPOSTS_EXPORT DeleteEndpointResponse : public S3OutpostsResponse {
    Q_OBJECT

public:
    DeleteEndpointResponse(const DeleteEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointResponse)
    Q_DISABLE_COPY(DeleteEndpointResponse)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
