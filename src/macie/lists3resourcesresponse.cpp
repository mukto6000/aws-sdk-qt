// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lists3resourcesresponse.h"
#include "lists3resourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::ListS3ResourcesResponse
 * \brief The ListS3ResourcesResponse class provides an interace for Macie ListS3Resources responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::listS3Resources
 */

/*!
 * Constructs a ListS3ResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListS3ResourcesResponse::ListS3ResourcesResponse(
        const ListS3ResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new ListS3ResourcesResponsePrivate(this), parent)
{
    setRequest(new ListS3ResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListS3ResourcesRequest * ListS3ResourcesResponse::request() const
{
    Q_D(const ListS3ResourcesResponse);
    return static_cast<const ListS3ResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie ListS3Resources \a response.
 */
void ListS3ResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListS3ResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::ListS3ResourcesResponsePrivate
 * \brief The ListS3ResourcesResponsePrivate class provides private implementation for ListS3ResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a ListS3ResourcesResponsePrivate object with public implementation \a q.
 */
ListS3ResourcesResponsePrivate::ListS3ResourcesResponsePrivate(
    ListS3ResourcesResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie ListS3Resources response element from \a xml.
 */
void ListS3ResourcesResponsePrivate::parseListS3ResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListS3ResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
