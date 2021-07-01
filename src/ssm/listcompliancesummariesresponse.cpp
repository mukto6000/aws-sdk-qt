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

#include "listcompliancesummariesresponse.h"
#include "listcompliancesummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::ListComplianceSummariesResponse
 * \brief The ListComplianceSummariesResponse class provides an interace for SSM ListComplianceSummaries responses.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon Elastic Compute Cloud instance (EC2
 *  instance), or any on-premises server or virtual machine (VM) in your hybrid environment that has been configured for
 *  Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up AWS
 *  Systems Manager</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API actions you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AWS AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AWS AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AWS AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AWS Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">AWS Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">AWS Incident Manager API
 *
 * \sa SsmClient::listComplianceSummaries
 */

/*!
 * Constructs a ListComplianceSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
ListComplianceSummariesResponse::ListComplianceSummariesResponse(
        const ListComplianceSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new ListComplianceSummariesResponsePrivate(this), parent)
{
    setRequest(new ListComplianceSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComplianceSummariesRequest * ListComplianceSummariesResponse::request() const
{
    Q_D(const ListComplianceSummariesResponse);
    return static_cast<const ListComplianceSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSM ListComplianceSummaries \a response.
 */
void ListComplianceSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListComplianceSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSM::ListComplianceSummariesResponsePrivate
 * \brief The ListComplianceSummariesResponsePrivate class provides private implementation for ListComplianceSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a ListComplianceSummariesResponsePrivate object with public implementation \a q.
 */
ListComplianceSummariesResponsePrivate::ListComplianceSummariesResponsePrivate(
    ListComplianceSummariesResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a SSM ListComplianceSummaries response element from \a xml.
 */
void ListComplianceSummariesResponsePrivate::parseListComplianceSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComplianceSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSM
} // namespace QtAws
