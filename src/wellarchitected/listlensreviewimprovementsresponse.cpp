// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlensreviewimprovementsresponse.h"
#include "listlensreviewimprovementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListLensReviewImprovementsResponse
 * \brief The ListLensReviewImprovementsResponse class provides an interace for WellArchitected ListLensReviewImprovements responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listLensReviewImprovements
 */

/*!
 * Constructs a ListLensReviewImprovementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLensReviewImprovementsResponse::ListLensReviewImprovementsResponse(
        const ListLensReviewImprovementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListLensReviewImprovementsResponsePrivate(this), parent)
{
    setRequest(new ListLensReviewImprovementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLensReviewImprovementsRequest * ListLensReviewImprovementsResponse::request() const
{
    Q_D(const ListLensReviewImprovementsResponse);
    return static_cast<const ListLensReviewImprovementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListLensReviewImprovements \a response.
 */
void ListLensReviewImprovementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLensReviewImprovementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListLensReviewImprovementsResponsePrivate
 * \brief The ListLensReviewImprovementsResponsePrivate class provides private implementation for ListLensReviewImprovementsResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListLensReviewImprovementsResponsePrivate object with public implementation \a q.
 */
ListLensReviewImprovementsResponsePrivate::ListLensReviewImprovementsResponsePrivate(
    ListLensReviewImprovementsResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListLensReviewImprovements response element from \a xml.
 */
void ListLensReviewImprovementsResponsePrivate::parseListLensReviewImprovementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLensReviewImprovementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
