// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofileresponse.h"
#include "deleteprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileResponse
 * \brief The DeleteProfileResponse class provides an interace for CustomerProfiles DeleteProfile responses.
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
 * \sa CustomerProfilesClient::deleteProfile
 */

/*!
 * Constructs a DeleteProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProfileResponse::DeleteProfileResponse(
        const DeleteProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new DeleteProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProfileRequest * DeleteProfileResponse::request() const
{
    Q_D(const DeleteProfileResponse);
    return static_cast<const DeleteProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles DeleteProfile \a response.
 */
void DeleteProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileResponsePrivate
 * \brief The DeleteProfileResponsePrivate class provides private implementation for DeleteProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteProfileResponsePrivate object with public implementation \a q.
 */
DeleteProfileResponsePrivate::DeleteProfileResponsePrivate(
    DeleteProfileResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles DeleteProfile response element from \a xml.
 */
void DeleteProfileResponsePrivate::parseDeleteProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
