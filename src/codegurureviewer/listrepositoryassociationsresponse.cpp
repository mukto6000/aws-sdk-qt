// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrepositoryassociationsresponse.h"
#include "listrepositoryassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::ListRepositoryAssociationsResponse
 * \brief The ListRepositoryAssociationsResponse class provides an interace for CodeGuruReviewer ListRepositoryAssociations responses.
 *
 * \inmodule QtAwsCodeGuruReviewer
 *
 *  This section provides documentation for the Amazon CodeGuru Reviewer API operations. CodeGuru Reviewer is a service that
 *  uses program analysis and machine learning to detect potential defects that are difficult for developers to find and
 *  recommends fixes in your Java and Python
 * 
 *  code>
 * 
 *  By proactively detecting and providing recommendations for addressing code defects and implementing best practices,
 *  CodeGuru Reviewer improves the overall quality and maintainability of your code base during the code review stage. For
 *  more information about CodeGuru Reviewer, see the <i> <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/welcome.html">Amazon CodeGuru Reviewer User Guide</a>.</i>
 * 
 *  </p
 * 
 *  To improve the security of your CodeGuru Reviewer API calls, you can establish a private connection between your VPC and
 *  CodeGuru Reviewer by creating an <i>interface VPC endpoint</i>. For more information, see <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/vpc-interface-endpoints.html">CodeGuru Reviewer and
 *  interface VPC endpoints (Amazon Web Services PrivateLink)</a> in the <i>Amazon CodeGuru Reviewer User
 *
 * \sa CodeGuruReviewerClient::listRepositoryAssociations
 */

/*!
 * Constructs a ListRepositoryAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRepositoryAssociationsResponse::ListRepositoryAssociationsResponse(
        const ListRepositoryAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruReviewerResponse(new ListRepositoryAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListRepositoryAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRepositoryAssociationsRequest * ListRepositoryAssociationsResponse::request() const
{
    Q_D(const ListRepositoryAssociationsResponse);
    return static_cast<const ListRepositoryAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruReviewer ListRepositoryAssociations \a response.
 */
void ListRepositoryAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRepositoryAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruReviewer::ListRepositoryAssociationsResponsePrivate
 * \brief The ListRepositoryAssociationsResponsePrivate class provides private implementation for ListRepositoryAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a ListRepositoryAssociationsResponsePrivate object with public implementation \a q.
 */
ListRepositoryAssociationsResponsePrivate::ListRepositoryAssociationsResponsePrivate(
    ListRepositoryAssociationsResponse * const q) : CodeGuruReviewerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruReviewer ListRepositoryAssociations response element from \a xml.
 */
void ListRepositoryAssociationsResponsePrivate::parseListRepositoryAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRepositoryAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruReviewer
} // namespace QtAws
