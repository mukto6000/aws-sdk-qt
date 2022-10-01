// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchprofilesresponse.h"
#include "searchprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::SearchProfilesResponse
 * \brief The SearchProfilesResponse class provides an interace for CustomerProfiles SearchProfiles responses.
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
 * \sa CustomerProfilesClient::searchProfiles
 */

/*!
 * Constructs a SearchProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchProfilesResponse::SearchProfilesResponse(
        const SearchProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CustomerProfilesResponse(new SearchProfilesResponsePrivate(this), parent)
{
    setRequest(new SearchProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchProfilesRequest * SearchProfilesResponse::request() const
{
    Q_D(const SearchProfilesResponse);
    return static_cast<const SearchProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CustomerProfiles SearchProfiles \a response.
 */
void SearchProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CustomerProfiles::SearchProfilesResponsePrivate
 * \brief The SearchProfilesResponsePrivate class provides private implementation for SearchProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a SearchProfilesResponsePrivate object with public implementation \a q.
 */
SearchProfilesResponsePrivate::SearchProfilesResponsePrivate(
    SearchProfilesResponse * const q) : CustomerProfilesResponsePrivate(q)
{

}

/*!
 * Parses a CustomerProfiles SearchProfiles response element from \a xml.
 */
void SearchProfilesResponsePrivate::parseSearchProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CustomerProfiles
} // namespace QtAws
