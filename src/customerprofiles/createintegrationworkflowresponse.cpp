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

#include "createintegrationworkflowresponse.h"
#include "createintegrationworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::CreateIntegrationWorkflowResponse
 * \brief The CreateIntegrationWorkflowResponse class provides an interace for CustomerProfiles CreateIntegrationWorkflow responses.
 *
 * \inmodule QtAwsCustomerProfiles
 *
 *  <fullname>Amazon Connect Customer Profiles</fullname>
 * 
 *  Welcome to the Amazon Connect Customer Profiles API Reference. This guide provides information about the Amazon Connect
 *  Customer Profiles API, including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Connect Customer Profiles is a unified customer profile for your contact center that has pre-built connectors
 *  powered by AppFlow that make it easy to combine customer information from third party applications, such as Salesforce
 *  (CRM), ServiceNow (ITSM), and your enterprise resource planning (ERP), with contact history from your Amazon Connect
 *  contact
 * 
 *  center>
 * 
 *  If you're new to Amazon Connect , you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon Connect Administrator
 *
 * \sa CustomerProfilesClient::createIntegrationWorkflow
 */

/*!
 * Constructs a CreateIntegrationWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIntegrationWorkflowResponse::CreateIntegrationWorkflowResponse(
        const CreateIntegrationWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new CreateIntegrationWorkflowResponsePrivate(this), parent)
{
    setRequest(new CreateIntegrationWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIntegrationWorkflowRequest * CreateIntegrationWorkflowResponse::request() const
{
    Q_D(const CreateIntegrationWorkflowResponse);
    return static_cast<const CreateIntegrationWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles CreateIntegrationWorkflow \a response.
 */
void CreateIntegrationWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIntegrationWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::CreateIntegrationWorkflowResponsePrivate
 * \brief The CreateIntegrationWorkflowResponsePrivate class provides private implementation for CreateIntegrationWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CreateIntegrationWorkflowResponsePrivate object with public implementation \a q.
 */
CreateIntegrationWorkflowResponsePrivate::CreateIntegrationWorkflowResponsePrivate(
    CreateIntegrationWorkflowResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles CreateIntegrationWorkflow response element from \a xml.
 */
void CreateIntegrationWorkflowResponsePrivate::parseCreateIntegrationWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntegrationWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
