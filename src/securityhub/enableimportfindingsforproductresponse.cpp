// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableimportfindingsforproductresponse.h"
#include "enableimportfindingsforproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::EnableImportFindingsForProductResponse
 * \brief The EnableImportFindingsForProductResponse class provides an interace for SecurityHub EnableImportFindingsForProduct responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your Amazon Web Services environment and
 *  resources. It also provides you with the readiness status of your environment based on controls from supported security
 *  standards. Security Hub collects security data from Amazon Web Services accounts, services, and integrated third-party
 *  products and helps you analyze security trends in your environment to identify the highest priority security issues. For
 *  more information about Security Hub, see the <a
 *  href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html"> <i>Security HubUser Guide</i>
 * 
 *  </a>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the Amazon Web Services Region that
 *  is currently active or in the specific Amazon Web Services Region that you specify in your request. Any configuration or
 *  settings change that results from the operation is applied only to that Region. To make the same change in other
 *  Regions, execute the same command for each Region to apply the change
 * 
 *  to>
 * 
 *  For example, if your Region is set to <code>us-west-2</code>, when you use <code>CreateMembers</code> to add a member
 *  account to Security Hub, the association of the member account with the administrator account is created only in the
 *  <code>us-west-2</code> Region. Security Hub must be enabled for the member account in the same Region that the
 *  invitation was sent
 * 
 *  from>
 * 
 *  The following throttling limits apply to using Security Hub API
 * 
 *  operations> <ul> <li>
 * 
 *  <code>BatchEnableStandards</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 1 request
 *  per
 * 
 *  second> </li> <li>
 * 
 *  <code>GetFindings</code> - <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6 requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchImportFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchUpdateFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>UpdateStandardsControl</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 5
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  All other operations - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30 requests per
 *
 * \sa SecurityHubClient::enableImportFindingsForProduct
 */

/*!
 * Constructs a EnableImportFindingsForProductResponse object for \a reply to \a request, with parent \a parent.
 */
EnableImportFindingsForProductResponse::EnableImportFindingsForProductResponse(
        const EnableImportFindingsForProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new EnableImportFindingsForProductResponsePrivate(this), parent)
{
    setRequest(new EnableImportFindingsForProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableImportFindingsForProductRequest * EnableImportFindingsForProductResponse::request() const
{
    Q_D(const EnableImportFindingsForProductResponse);
    return static_cast<const EnableImportFindingsForProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub EnableImportFindingsForProduct \a response.
 */
void EnableImportFindingsForProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableImportFindingsForProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::EnableImportFindingsForProductResponsePrivate
 * \brief The EnableImportFindingsForProductResponsePrivate class provides private implementation for EnableImportFindingsForProductResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a EnableImportFindingsForProductResponsePrivate object with public implementation \a q.
 */
EnableImportFindingsForProductResponsePrivate::EnableImportFindingsForProductResponsePrivate(
    EnableImportFindingsForProductResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub EnableImportFindingsForProduct response element from \a xml.
 */
void EnableImportFindingsForProductResponsePrivate::parseEnableImportFindingsForProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableImportFindingsForProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
