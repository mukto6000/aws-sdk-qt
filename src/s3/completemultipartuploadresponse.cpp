// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completemultipartuploadresponse.h"
#include "completemultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CompleteMultipartUploadResponse
 * \brief The CompleteMultipartUploadResponse class provides an interace for S3 CompleteMultipartUpload responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::completeMultipartUpload
 */

/*!
 * Constructs a CompleteMultipartUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteMultipartUploadResponse::CompleteMultipartUploadResponse(
        const CompleteMultipartUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CompleteMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteMultipartUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompleteMultipartUploadRequest * CompleteMultipartUploadResponse::request() const
{
    Q_D(const CompleteMultipartUploadResponse);
    return static_cast<const CompleteMultipartUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 CompleteMultipartUpload \a response.
 */
void CompleteMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteMultipartUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::CompleteMultipartUploadResponsePrivate
 * \brief The CompleteMultipartUploadResponsePrivate class provides private implementation for CompleteMultipartUploadResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CompleteMultipartUploadResponsePrivate object with public implementation \a q.
 */
CompleteMultipartUploadResponsePrivate::CompleteMultipartUploadResponsePrivate(
    CompleteMultipartUploadResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 CompleteMultipartUpload response element from \a xml.
 */
void CompleteMultipartUploadResponsePrivate::parseCompleteMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteMultipartUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
