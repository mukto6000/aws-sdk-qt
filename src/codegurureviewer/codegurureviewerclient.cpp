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

#include "codegurureviewerclient.h"
#include "codegurureviewerclient_p.h"

#include "core/awssignaturev4.h"
#include "associaterepositoryrequest.h"
#include "associaterepositoryresponse.h"
#include "createcodereviewrequest.h"
#include "createcodereviewresponse.h"
#include "describecodereviewrequest.h"
#include "describecodereviewresponse.h"
#include "describerecommendationfeedbackrequest.h"
#include "describerecommendationfeedbackresponse.h"
#include "describerepositoryassociationrequest.h"
#include "describerepositoryassociationresponse.h"
#include "disassociaterepositoryrequest.h"
#include "disassociaterepositoryresponse.h"
#include "listcodereviewsrequest.h"
#include "listcodereviewsresponse.h"
#include "listrecommendationfeedbackrequest.h"
#include "listrecommendationfeedbackresponse.h"
#include "listrecommendationsrequest.h"
#include "listrecommendationsresponse.h"
#include "listrepositoryassociationsrequest.h"
#include "listrepositoryassociationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putrecommendationfeedbackrequest.h"
#include "putrecommendationfeedbackresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeGuruReviewer
 * \brief Contains classess for accessing Amazon CodeGuru Reviewer (CodeGuruReviewer).
 *
 * \inmodule QtAwsCodeGuruReviewer
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::CodeGuruReviewerClient
 * \brief The CodeGuruReviewerClient class provides access to the Amazon CodeGuru Reviewer (CodeGuruReviewer) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeGuruReviewer
 *
 *  This section provides documentation for the Amazon CodeGuru Reviewer API operations. CodeGuru Reviewer is a service that
 *  uses program analysis and machine learning to detect potential defects that are difficult for developers to find and
 *  recommendations to address them in your Java and Python
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
 *  interface VPC endpoints (AWS PrivateLink)</a> in the <i>Amazon CodeGuru Reviewer User Guide</i>.
 */

/*!
 * \brief Constructs a CodeGuruReviewerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeGuruReviewerClient::CodeGuruReviewerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-09-19"),
    QStringLiteral("codeguru-reviewer"),
    QStringLiteral("Amazon CodeGuru Reviewer"),
    QStringLiteral("codeguru-reviewer"),
    parent), d_ptr(new CodeGuruReviewerClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload CodeGuruReviewerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CodeGuruReviewerClient::CodeGuruReviewerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-09-19"),
    QStringLiteral("codeguru-reviewer"),
    QStringLiteral("Amazon CodeGuru Reviewer"),
    QStringLiteral("codeguru-reviewer"),
    parent), d_ptr(new CodeGuruReviewerClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * AssociateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to associate an AWS CodeCommit repository or a repostory managed by AWS CodeStar Connections with Amazon CodeGuru
 * Reviewer. When you associate a repository, CodeGuru Reviewer reviews source code changes in the repository's pull
 * requests and provides automatic recommendations. You can view recommendations using the CodeGuru Reviewer console. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/recommendations.html">Recommendations in Amazon CodeGuru
 * Reviewer</a> in the <i>Amazon CodeGuru Reviewer User Guide.</i>
 *
 * </p
 *
 * If you associate a CodeCommit repository, it must be in the same AWS Region and AWS account where its CodeGuru Reviewer
 * code reviews are
 *
 * configured>
 *
 * Bitbucket and GitHub Enterprise Server repositories are managed by AWS CodeStar Connections to connect to CodeGuru
 * Reviewer. For more information, see <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/getting-started-associate-repository.html">Associate a
 * repository</a> in the <i>Amazon CodeGuru Reviewer User Guide.</i>
 *
 * </p <note>
 *
 * You cannot use the CodeGuru Reviewer SDK or the AWS CLI to associate a GitHub repository with Amazon CodeGuru Reviewer.
 * To associate a GitHub repository, use the console. For more information, see <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/getting-started-with-guru.html">Getting started with
 * CodeGuru Reviewer</a> in the <i>CodeGuru Reviewer User Guide.</i>
 */
AssociateRepositoryResponse * CodeGuruReviewerClient::associateRepository(const AssociateRepositoryRequest &request)
{
    return qobject_cast<AssociateRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * CreateCodeReviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to create a code review with a <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReviewType.html"> <code>CodeReviewType</code>
 * </a> of <code>RepositoryAnalysis</code>. This type of code review analyzes all code under a specified branch in an
 * associated repository. <code>PullRequest</code> code reviews are automatically triggered by a pull request so cannot be
 * created using this method.
 */
CreateCodeReviewResponse * CodeGuruReviewerClient::createCodeReview(const CreateCodeReviewRequest &request)
{
    return qobject_cast<CreateCodeReviewResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * DescribeCodeReviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the metadata associated with the code review along with its
 */
DescribeCodeReviewResponse * CodeGuruReviewerClient::describeCodeReview(const DescribeCodeReviewRequest &request)
{
    return qobject_cast<DescribeCodeReviewResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * DescribeRecommendationFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the customer feedback for a CodeGuru Reviewer recommendation.
 */
DescribeRecommendationFeedbackResponse * CodeGuruReviewerClient::describeRecommendationFeedback(const DescribeRecommendationFeedbackRequest &request)
{
    return qobject_cast<DescribeRecommendationFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * DescribeRepositoryAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <a href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">
 * <code>RepositoryAssociation</code> </a> object that contains information about the requested repository association.
 */
DescribeRepositoryAssociationResponse * CodeGuruReviewerClient::describeRepositoryAssociation(const DescribeRepositoryAssociationRequest &request)
{
    return qobject_cast<DescribeRepositoryAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * DisassociateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between Amazon CodeGuru Reviewer and a
 */
DisassociateRepositoryResponse * CodeGuruReviewerClient::disassociateRepository(const DisassociateRepositoryRequest &request)
{
    return qobject_cast<DisassociateRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * ListCodeReviewsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the code reviews that the customer has created in the past 90 days.
 */
ListCodeReviewsResponse * CodeGuruReviewerClient::listCodeReviews(const ListCodeReviewsRequest &request)
{
    return qobject_cast<ListCodeReviewsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * ListRecommendationFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RecommendationFeedbackSummary.html">
 * <code>RecommendationFeedbackSummary</code> </a> objects that contain customer recommendation feedback for all CodeGuru
 * Reviewer users.
 */
ListRecommendationFeedbackResponse * CodeGuruReviewerClient::listRecommendationFeedback(const ListRecommendationFeedbackRequest &request)
{
    return qobject_cast<ListRecommendationFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * ListRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of all recommendations for a completed code review.
 */
ListRecommendationsResponse * CodeGuruReviewerClient::listRecommendations(const ListRecommendationsRequest &request)
{
    return qobject_cast<ListRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * ListRepositoryAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html">
 * <code>RepositoryAssociationSummary</code> </a> objects that contain summary information about a repository association.
 * You can filter the returned list by <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-ProviderType">
 * <code>ProviderType</code> </a>, <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Name">
 * <code>Name</code> </a>, <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-State">
 * <code>State</code> </a>, and <a
 * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Owner">
 * <code>Owner</code> </a>.
 */
ListRepositoryAssociationsResponse * CodeGuruReviewerClient::listRepositoryAssociations(const ListRepositoryAssociationsRequest &request)
{
    return qobject_cast<ListRepositoryAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of tags associated with an associated repository
 */
ListTagsForResourceResponse * CodeGuruReviewerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * PutRecommendationFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores customer feedback for a CodeGuru Reviewer recommendation. When this API is called again with different reactions
 * the previous feedback is overwritten.
 */
PutRecommendationFeedbackResponse * CodeGuruReviewerClient::putRecommendationFeedback(const PutRecommendationFeedbackRequest &request)
{
    return qobject_cast<PutRecommendationFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to an associated
 */
TagResourceResponse * CodeGuruReviewerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruReviewerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from an associated
 */
UntagResourceResponse * CodeGuruReviewerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::CodeGuruReviewer::CodeGuruReviewerClientPrivate
 * \brief The CodeGuruReviewerClientPrivate class provides private implementation for CodeGuruReviewerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a CodeGuruReviewerClientPrivate object with public implementation \a q.
 */
CodeGuruReviewerClientPrivate::CodeGuruReviewerClientPrivate(CodeGuruReviewerClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace CodeGuruReviewer
} // namespace QtAws
