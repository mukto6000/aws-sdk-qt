// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcompatibleimagesresponse.h"
#include "listcompatibleimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListCompatibleImagesResponse
 * \brief The ListCompatibleImagesResponse class provides an interace for Snowball ListCompatibleImages responses.
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
 * \sa SnowballClient::listCompatibleImages
 */

/*!
 * Constructs a ListCompatibleImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCompatibleImagesResponse::ListCompatibleImagesResponse(
        const ListCompatibleImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new ListCompatibleImagesResponsePrivate(this), parent)
{
    setRequest(new ListCompatibleImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCompatibleImagesRequest * ListCompatibleImagesResponse::request() const
{
    Q_D(const ListCompatibleImagesResponse);
    return static_cast<const ListCompatibleImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball ListCompatibleImages \a response.
 */
void ListCompatibleImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCompatibleImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::ListCompatibleImagesResponsePrivate
 * \brief The ListCompatibleImagesResponsePrivate class provides private implementation for ListCompatibleImagesResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListCompatibleImagesResponsePrivate object with public implementation \a q.
 */
ListCompatibleImagesResponsePrivate::ListCompatibleImagesResponsePrivate(
    ListCompatibleImagesResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball ListCompatibleImages response element from \a xml.
 */
void ListCompatibleImagesResponsePrivate::parseListCompatibleImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCompatibleImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
