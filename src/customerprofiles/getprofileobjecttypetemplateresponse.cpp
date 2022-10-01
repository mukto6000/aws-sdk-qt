// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprofileobjecttypetemplateresponse.h"
#include "getprofileobjecttypetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetProfileObjectTypeTemplateResponse
 * \brief The GetProfileObjectTypeTemplateResponse class provides an interace for CustomerProfiles GetProfileObjectTypeTemplate responses.
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
 * \sa CustomerProfilesClient::getProfileObjectTypeTemplate
 */

/*!
 * Constructs a GetProfileObjectTypeTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetProfileObjectTypeTemplateResponse::GetProfileObjectTypeTemplateResponse(
        const GetProfileObjectTypeTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new GetProfileObjectTypeTemplateResponsePrivate(this), parent)
{
    setRequest(new GetProfileObjectTypeTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProfileObjectTypeTemplateRequest * GetProfileObjectTypeTemplateResponse::request() const
{
    Q_D(const GetProfileObjectTypeTemplateResponse);
    return static_cast<const GetProfileObjectTypeTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles GetProfileObjectTypeTemplate \a response.
 */
void GetProfileObjectTypeTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProfileObjectTypeTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::GetProfileObjectTypeTemplateResponsePrivate
 * \brief The GetProfileObjectTypeTemplateResponsePrivate class provides private implementation for GetProfileObjectTypeTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetProfileObjectTypeTemplateResponsePrivate object with public implementation \a q.
 */
GetProfileObjectTypeTemplateResponsePrivate::GetProfileObjectTypeTemplateResponsePrivate(
    GetProfileObjectTypeTemplateResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles GetProfileObjectTypeTemplate response element from \a xml.
 */
void GetProfileObjectTypeTemplateResponsePrivate::parseGetProfileObjectTypeTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProfileObjectTypeTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
