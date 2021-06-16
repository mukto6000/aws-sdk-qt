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

#include "putpublicaccessblockresponse.h"
#include "putpublicaccessblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutPublicAccessBlockResponse
 * \brief The PutPublicAccessBlockResponse class provides an interace for S3 PutPublicAccessBlock responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putPublicAccessBlock
 */

/*!
 * Constructs a PutPublicAccessBlockResponse object for \a reply to \a request, with parent \a parent.
 */
PutPublicAccessBlockResponse::PutPublicAccessBlockResponse(
        const PutPublicAccessBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutPublicAccessBlockResponsePrivate(this), parent)
{
    setRequest(new PutPublicAccessBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPublicAccessBlockRequest * PutPublicAccessBlockResponse::request() const
{
    Q_D(const PutPublicAccessBlockResponse);
    return static_cast<const PutPublicAccessBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutPublicAccessBlock \a response.
 */
void PutPublicAccessBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPublicAccessBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutPublicAccessBlockResponsePrivate
 * \brief The PutPublicAccessBlockResponsePrivate class provides private implementation for PutPublicAccessBlockResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutPublicAccessBlockResponsePrivate object with public implementation \a q.
 */
PutPublicAccessBlockResponsePrivate::PutPublicAccessBlockResponsePrivate(
    PutPublicAccessBlockResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutPublicAccessBlock response element from \a xml.
 */
void PutPublicAccessBlockResponsePrivate::parsePutPublicAccessBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPublicAccessBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
