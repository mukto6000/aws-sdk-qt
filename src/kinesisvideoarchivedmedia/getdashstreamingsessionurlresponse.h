// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHSTREAMINGSESSIONURLRESPONSE_H
#define QTAWS_GETDASHSTREAMINGSESSIONURLRESPONSE_H

#include "kinesisvideoarchivedmediaresponse.h"
#include "getdashstreamingsessionurlrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetDASHStreamingSessionURLResponsePrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetDASHStreamingSessionURLResponse : public KinesisVideoArchivedMediaResponse {
    Q_OBJECT

public:
    GetDASHStreamingSessionURLResponse(const GetDASHStreamingSessionURLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDASHStreamingSessionURLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDASHStreamingSessionURLResponse)
    Q_DISABLE_COPY(GetDASHStreamingSessionURLResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
