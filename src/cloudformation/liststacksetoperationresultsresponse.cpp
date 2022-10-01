// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststacksetoperationresultsresponse.h"
#include "liststacksetoperationresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListStackSetOperationResultsResponse
 * \brief The ListStackSetOperationResultsResponse class provides an interace for CloudFormation ListStackSetOperationResults responses.
 *
 * \inmodule QtAwsCloudFormation
 *
 *  <fullname>CloudFormation</fullname>
 * 
 *  CloudFormation allows you to create and manage Amazon Web Services infrastructure deployments predictably and
 *  repeatedly. You can use CloudFormation to leverage Amazon Web Services products, such as Amazon Elastic Compute Cloud,
 *  Amazon Elastic Block Store, Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly
 *  reliable, highly scalable, cost-effective applications without creating or configuring the underlying Amazon Web
 *  Services
 * 
 *  infrastructure>
 * 
 *  With CloudFormation, you declare all your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. CloudFormation creates and deletes all member resources of the
 *  stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">CloudFormation
 *  product
 * 
 *  page</a>>
 * 
 *  CloudFormation makes use of other Amazon Web Services products. If you need additional technical information about a
 *  specific Amazon Web Services product, you can find the product's technical documentation at <a
 *  href="https://docs.aws.amazon.com/"> <code>docs.aws.amazon.com</code>
 *
 * \sa CloudFormationClient::listStackSetOperationResults
 */

/*!
 * Constructs a ListStackSetOperationResultsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStackSetOperationResultsResponse::ListStackSetOperationResultsResponse(
        const ListStackSetOperationResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListStackSetOperationResultsResponsePrivate(this), parent)
{
    setRequest(new ListStackSetOperationResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStackSetOperationResultsRequest * ListStackSetOperationResultsResponse::request() const
{
    Q_D(const ListStackSetOperationResultsResponse);
    return static_cast<const ListStackSetOperationResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation ListStackSetOperationResults \a response.
 */
void ListStackSetOperationResultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStackSetOperationResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::ListStackSetOperationResultsResponsePrivate
 * \brief The ListStackSetOperationResultsResponsePrivate class provides private implementation for ListStackSetOperationResultsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ListStackSetOperationResultsResponsePrivate object with public implementation \a q.
 */
ListStackSetOperationResultsResponsePrivate::ListStackSetOperationResultsResponsePrivate(
    ListStackSetOperationResultsResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation ListStackSetOperationResults response element from \a xml.
 */
void ListStackSetOperationResultsResponsePrivate::parseListStackSetOperationResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackSetOperationResultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
