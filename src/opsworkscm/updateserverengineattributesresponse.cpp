// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateserverengineattributesresponse.h"
#include "updateserverengineattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCm {

/*!
 * \class QtAws::OpsWorksCm::UpdateServerEngineAttributesResponse
 * \brief The UpdateServerEngineAttributesResponse class provides an interace for OpsWorksCm UpdateServerEngineAttributes responses.
 *
 * \inmodule QtAwsOpsWorksCm
 *
 *  <fullname>AWS OpsWorks CM</fullname>
 * 
 *  AWS OpsWorks for configuration management (CM) is a service that runs and manages configuration management servers. You
 *  can use AWS OpsWorks CM to create and manage AWS OpsWorks for Chef Automate and AWS OpsWorks for Puppet Enterprise
 *  servers, and add or remove nodes for the servers to
 * 
 *  manage>
 * 
 *  <b>Glossary of terms</b>
 * 
 *  </p <ul> <li>
 * 
 *  <b>Server</b>: A configuration management server that can be highly-available. The configuration management server runs
 *  on an Amazon Elastic Compute Cloud (EC2) instance, and may use various other AWS services, such as Amazon Relational
 *  Database Service (RDS) and Elastic Load Balancing. A server is a generic abstraction over the configuration manager that
 *  you want to use, much like Amazon RDS. In AWS OpsWorks CM, you do not start or stop servers. After you create servers,
 *  they continue to run until they are
 * 
 *  deleted> </li> <li>
 * 
 *  <b>Engine</b>: The engine is the specific configuration manager that you want to use. Valid values in this release
 *  include <code>ChefAutomate</code> and
 * 
 *  <code>Puppet</code>> </li> <li>
 * 
 *  <b>Backup</b>: This is an application-level backup of the data that the configuration manager stores. AWS OpsWorks CM
 *  creates an S3 bucket for backups when you launch the first server. A backup maintains a snapshot of a server's
 *  configuration-related attributes at the time the backup
 * 
 *  starts> </li> <li>
 * 
 *  <b>Events</b>: Events are always related to a server. Events are written during server creation, when health checks run,
 *  when backups are created, when system maintenance is performed, etc. When you delete a server, the server's events are
 *  also
 * 
 *  deleted> </li> <li>
 * 
 *  <b>Account attributes</b>: Every account has attributes that are assigned in the AWS OpsWorks CM database. These
 *  attributes store information about configuration limits (servers, backups, etc.) and your customer account.
 * 
 *  </p </li> </ul>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  AWS OpsWorks CM supports the following endpoints, all HTTPS. You must connect to one of the following endpoints. Your
 *  servers can only be accessed or managed within the endpoint in which they are
 * 
 *  created> <ul> <li>
 * 
 *  opsworks-cm.us-east-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-east-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-northeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-southeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-southeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.eu-central-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.eu-west-1.amazonaws.co> </li> </ul>
 * 
 *  For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/opsworks-service.html">AWS OpsWorks
 *  endpoints and quotas</a> in the AWS General
 * 
 *  Reference>
 * 
 *  <b>Throttling limits</b>
 * 
 *  </p
 * 
 *  All API operations allow for five requests per second with a burst of 10 requests per
 *
 * \sa OpsWorksCmClient::updateServerEngineAttributes
 */

/*!
 * Constructs a UpdateServerEngineAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServerEngineAttributesResponse::UpdateServerEngineAttributesResponse(
        const UpdateServerEngineAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCmResponse(new UpdateServerEngineAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateServerEngineAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServerEngineAttributesRequest * UpdateServerEngineAttributesResponse::request() const
{
    Q_D(const UpdateServerEngineAttributesResponse);
    return static_cast<const UpdateServerEngineAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpsWorksCm UpdateServerEngineAttributes \a response.
 */
void UpdateServerEngineAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServerEngineAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpsWorksCm::UpdateServerEngineAttributesResponsePrivate
 * \brief The UpdateServerEngineAttributesResponsePrivate class provides private implementation for UpdateServerEngineAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsOpsWorksCm
 */

/*!
 * Constructs a UpdateServerEngineAttributesResponsePrivate object with public implementation \a q.
 */
UpdateServerEngineAttributesResponsePrivate::UpdateServerEngineAttributesResponsePrivate(
    UpdateServerEngineAttributesResponse * const q) : OpsWorksCmResponsePrivate(q)
{

}

/*!
 * Parses a OpsWorksCm UpdateServerEngineAttributes response element from \a xml.
 */
void UpdateServerEngineAttributesResponsePrivate::parseUpdateServerEngineAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerEngineAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpsWorksCm
} // namespace QtAws
