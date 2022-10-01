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

#include "deletemanagedendpointresponse.h"
#include "deletemanagedendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::DeleteManagedEndpointResponse
 * \brief The DeleteManagedEndpointResponse class provides an interace for Emrcontainers DeleteManagedEndpoint responses.
 *
 * \inmodule QtAwsEmrcontainers
 *
 *  Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you to run open-source big data frameworks on
 *  Amazon Elastic Kubernetes Service (Amazon EKS). With this deployment option, you can focus on running analytics
 *  workloads while Amazon EMR on EKS builds, configures, and manages containers for open-source applications. For more
 *  information about Amazon EMR on EKS concepts and tasks, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What is Amazon EMR on
 * 
 *  EKS</a>>
 * 
 *  <i>Amazon EMR containers</i> is the API name for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in
 *  the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR on EKS. For example, <code>aws emr-containers
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR on EKS. For example, <code>"Action": [
 *  "emr-containers:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR on
 * 
 *  EKS</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR on EKS service endpoints. For example,
 *  <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
 *  EMR on EKS Service
 *
 * \sa EmrcontainersClient::deleteManagedEndpoint
 */

/*!
 * Constructs a DeleteManagedEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteManagedEndpointResponse::DeleteManagedEndpointResponse(
        const DeleteManagedEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrcontainersResponse(new DeleteManagedEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteManagedEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteManagedEndpointRequest * DeleteManagedEndpointResponse::request() const
{
    Q_D(const DeleteManagedEndpointResponse);
    return static_cast<const DeleteManagedEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emrcontainers DeleteManagedEndpoint \a response.
 */
void DeleteManagedEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteManagedEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emrcontainers::DeleteManagedEndpointResponsePrivate
 * \brief The DeleteManagedEndpointResponsePrivate class provides private implementation for DeleteManagedEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a DeleteManagedEndpointResponsePrivate object with public implementation \a q.
 */
DeleteManagedEndpointResponsePrivate::DeleteManagedEndpointResponsePrivate(
    DeleteManagedEndpointResponse * const q) : EmrcontainersResponsePrivate(q)
{

}

/*!
 * Parses a Emrcontainers DeleteManagedEndpoint response element from \a xml.
 */
void DeleteManagedEndpointResponsePrivate::parseDeleteManagedEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteManagedEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emrcontainers
} // namespace QtAws
