// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsoftwareupdatesresponse.h"
#include "getsoftwareupdatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetSoftwareUpdatesResponse
 * \brief The GetSoftwareUpdatesResponse class provides an interace for Snowball GetSoftwareUpdates responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::getSoftwareUpdates
 */

/*!
 * Constructs a GetSoftwareUpdatesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSoftwareUpdatesResponse::GetSoftwareUpdatesResponse(
        const GetSoftwareUpdatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new GetSoftwareUpdatesResponsePrivate(this), parent)
{
    setRequest(new GetSoftwareUpdatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSoftwareUpdatesRequest * GetSoftwareUpdatesResponse::request() const
{
    Q_D(const GetSoftwareUpdatesResponse);
    return static_cast<const GetSoftwareUpdatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball GetSoftwareUpdates \a response.
 */
void GetSoftwareUpdatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSoftwareUpdatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::GetSoftwareUpdatesResponsePrivate
 * \brief The GetSoftwareUpdatesResponsePrivate class provides private implementation for GetSoftwareUpdatesResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a GetSoftwareUpdatesResponsePrivate object with public implementation \a q.
 */
GetSoftwareUpdatesResponsePrivate::GetSoftwareUpdatesResponsePrivate(
    GetSoftwareUpdatesResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball GetSoftwareUpdates response element from \a xml.
 */
void GetSoftwareUpdatesResponsePrivate::parseGetSoftwareUpdatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSoftwareUpdatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
