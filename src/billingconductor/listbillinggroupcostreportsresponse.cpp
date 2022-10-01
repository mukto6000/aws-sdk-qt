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

#include "listbillinggroupcostreportsresponse.h"
#include "listbillinggroupcostreportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::ListBillingGroupCostReportsResponse
 * \brief The ListBillingGroupCostReportsResponse class provides an interace for BillingConductor ListBillingGroupCostReports responses.
 *
 * \inmodule QtAwsBillingConductor
 *
 *  Amazon Web Services Billing Conductor is a fully managed service that you can use to customize a <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/understanding-eb.html#eb-other-definitions">pro
 *  forma</a> version of your billing data each month, to accurately show or chargeback your end customers. Amazon Web
 *  Services Billing Conductor doesn't change the way you're billed by Amazon Web Services each month by design. Instead, it
 *  provides you with a mechanism to configure, generate, and display rates to certain customers over a given billing
 *  period. You can also analyze the difference between the rates you apply to your accounting groupings relative to your
 *  actual rates from Amazon Web Services. As a result of your Amazon Web Services Billing Conductor configuration, the
 *  payer account can also see the custom rate applied on the billing details page of the <a
 *  href="https://console.aws.amazon.com/billing">Amazon Web Services Billing console</a>, or configure a cost and usage
 *  report per billing
 * 
 *  group>
 * 
 *  This documentation shows how you can configure Amazon Web Services Billing Conductor using its API. For more information
 *  about using the <a href="https://console.aws.amazon.com/enterprisebilling/">Amazon Web Services Billing Conductor</a>
 *  user interface, see the <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/what-is-enterprisebilling.html">
 *  Amazon Web Services Enterprise Billing Console User
 *
 * \sa BillingConductorClient::listBillingGroupCostReports
 */

/*!
 * Constructs a ListBillingGroupCostReportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBillingGroupCostReportsResponse::ListBillingGroupCostReportsResponse(
        const ListBillingGroupCostReportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BillingConductorResponse(new ListBillingGroupCostReportsResponsePrivate(this), parent)
{
    setRequest(new ListBillingGroupCostReportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBillingGroupCostReportsRequest * ListBillingGroupCostReportsResponse::request() const
{
    Q_D(const ListBillingGroupCostReportsResponse);
    return static_cast<const ListBillingGroupCostReportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BillingConductor ListBillingGroupCostReports \a response.
 */
void ListBillingGroupCostReportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBillingGroupCostReportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BillingConductor::ListBillingGroupCostReportsResponsePrivate
 * \brief The ListBillingGroupCostReportsResponsePrivate class provides private implementation for ListBillingGroupCostReportsResponse.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a ListBillingGroupCostReportsResponsePrivate object with public implementation \a q.
 */
ListBillingGroupCostReportsResponsePrivate::ListBillingGroupCostReportsResponsePrivate(
    ListBillingGroupCostReportsResponse * const q) : BillingConductorResponsePrivate(q)
{

}

/*!
 * Parses a BillingConductor ListBillingGroupCostReports response element from \a xml.
 */
void ListBillingGroupCostReportsResponsePrivate::parseListBillingGroupCostReportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBillingGroupCostReportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BillingConductor
} // namespace QtAws
