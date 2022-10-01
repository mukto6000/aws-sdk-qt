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

#include "lists3bucketsresponse.h"
#include "lists3bucketsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ListS3BucketsResponse
 * \brief The ListS3BucketsResponse class provides an interace for AmplifyBackend ListS3Buckets responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::listS3Buckets
 */

/*!
 * Constructs a ListS3BucketsResponse object for \a reply to \a request, with parent \a parent.
 */
ListS3BucketsResponse::ListS3BucketsResponse(
        const ListS3BucketsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new ListS3BucketsResponsePrivate(this), parent)
{
    setRequest(new ListS3BucketsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListS3BucketsRequest * ListS3BucketsResponse::request() const
{
    Q_D(const ListS3BucketsResponse);
    return static_cast<const ListS3BucketsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend ListS3Buckets \a response.
 */
void ListS3BucketsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListS3BucketsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::ListS3BucketsResponsePrivate
 * \brief The ListS3BucketsResponsePrivate class provides private implementation for ListS3BucketsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ListS3BucketsResponsePrivate object with public implementation \a q.
 */
ListS3BucketsResponsePrivate::ListS3BucketsResponsePrivate(
    ListS3BucketsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend ListS3Buckets response element from \a xml.
 */
void ListS3BucketsResponsePrivate::parseListS3BucketsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListS3BucketsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
