// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerconnectorresponse.h"
#include "registerconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::RegisterConnectorResponse
 * \brief The RegisterConnectorResponse class provides an interace for Appflow RegisterConnector responses.
 *
 * \inmodule QtAwsAppflow
 *
 *  Welcome to the Amazon AppFlow API reference. This guide is for developers who need detailed information about the Amazon
 *  AppFlow API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Amazon AppFlow is a fully managed integration service that enables you to securely transfer data between software as a
 *  service (SaaS) applications like Salesforce, Marketo, Slack, and ServiceNow, and Amazon Web Services like Amazon S3 and
 *  Amazon Redshift.
 * 
 *  </p
 * 
 *  Use the following links to get started on the Amazon AppFlow
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Operations.html">Actions</a>: An alphabetical list of
 *  all Amazon AppFlow API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Types.html">Data types</a>: An alphabetical list of
 *  all Amazon AppFlow data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonParameters.html">Common parameters</a>: Parameters
 *  that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonErrors.html">Common errors</a>: Client and server
 *  errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to Amazon AppFlow, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/appflow/latest/userguide/what-is-appflow.html">Amazon AppFlow User
 * 
 *  Guide</a>>
 * 
 *  Amazon AppFlow API users can use vendor-specific mechanisms for OAuth, and include applicable OAuth attributes (such as
 *  <code>auth-code</code> and <code>redirecturi</code>) with the connector-specific <code>ConnectorProfileProperties</code>
 *  when creating a new connector profile using Amazon AppFlow API operations. For example, Salesforce users can refer to
 *  the <a href="https://help.salesforce.com/articleView?id=remoteaccess_authenticate.htm"> <i>Authorize Apps with OAuth</i>
 *  </a>
 *
 * \sa AppflowClient::registerConnector
 */

/*!
 * Constructs a RegisterConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterConnectorResponse::RegisterConnectorResponse(
        const RegisterConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppflowResponse(new RegisterConnectorResponsePrivate(this), parent)
{
    setRequest(new RegisterConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterConnectorRequest * RegisterConnectorResponse::request() const
{
    Q_D(const RegisterConnectorResponse);
    return static_cast<const RegisterConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Appflow RegisterConnector \a response.
 */
void RegisterConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Appflow::RegisterConnectorResponsePrivate
 * \brief The RegisterConnectorResponsePrivate class provides private implementation for RegisterConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a RegisterConnectorResponsePrivate object with public implementation \a q.
 */
RegisterConnectorResponsePrivate::RegisterConnectorResponsePrivate(
    RegisterConnectorResponse * const q) : AppflowResponsePrivate(q)
{

}

/*!
 * Parses a Appflow RegisterConnector response element from \a xml.
 */
void RegisterConnectorResponsePrivate::parseRegisterConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Appflow
} // namespace QtAws
