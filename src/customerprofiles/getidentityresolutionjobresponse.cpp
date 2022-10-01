// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentityresolutionjobresponse.h"
#include "getidentityresolutionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetIdentityResolutionJobResponse
 * \brief The GetIdentityResolutionJobResponse class provides an interace for CustomerProfiles GetIdentityResolutionJob responses.
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
 * \sa CustomerProfilesClient::getIdentityResolutionJob
 */

/*!
 * Constructs a GetIdentityResolutionJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityResolutionJobResponse::GetIdentityResolutionJobResponse(
        const GetIdentityResolutionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetIdentityResolutionJobResponsePrivate(this), parent)
{
    setRequest(new GetIdentityResolutionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityResolutionJobRequest * GetIdentityResolutionJobResponse::request() const
{
    Q_D(const GetIdentityResolutionJobResponse);
    return static_cast<const GetIdentityResolutionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetIdentityResolutionJob \a response.
 */
void GetIdentityResolutionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityResolutionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetIdentityResolutionJobResponsePrivate
 * \brief The GetIdentityResolutionJobResponsePrivate class provides private implementation for GetIdentityResolutionJobResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetIdentityResolutionJobResponsePrivate object with public implementation \a q.
 */
GetIdentityResolutionJobResponsePrivate::GetIdentityResolutionJobResponsePrivate(
    GetIdentityResolutionJobResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetIdentityResolutionJob response element from \a xml.
 */
void GetIdentityResolutionJobResponsePrivate::parseGetIdentityResolutionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityResolutionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
