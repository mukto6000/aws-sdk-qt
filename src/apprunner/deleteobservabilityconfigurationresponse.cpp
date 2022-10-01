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

#include "deleteobservabilityconfigurationresponse.h"
#include "deleteobservabilityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::DeleteObservabilityConfigurationResponse
 * \brief The DeleteObservabilityConfigurationResponse class provides an interace for AppRunner DeleteObservabilityConfiguration responses.
 *
 * \inmodule QtAwsAppRunner
 *
 *  <fullname>App Runner</fullname>
 * 
 *  App Runner is an application service that provides a fast, simple, and cost-effective way to go directly from an
 *  existing container image or source code to a running service in the Amazon Web Services Cloud in seconds. You don't need
 *  to learn new technologies, decide which compute service to use, or understand how to provision and configure Amazon Web
 *  Services
 * 
 *  resources>
 * 
 *  App Runner connects directly to your container registry or source code repository. It provides an automatic delivery
 *  pipeline with fully managed operations, high performance, scalability, and
 * 
 *  security>
 * 
 *  For more information about App Runner, see the <a href="https://docs.aws.amazon.com/apprunner/latest/dg/">App Runner
 *  Developer Guide</a>. For release information, see the <a
 *  href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">App Runner Release
 * 
 *  Notes</a>>
 * 
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that you can use to access the API, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that App Runner supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">App Runner endpoints and quotas</a> in the <i>Amazon
 *  Web Services General
 *
 * \sa AppRunnerClient::deleteObservabilityConfiguration
 */

/*!
 * Constructs a DeleteObservabilityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObservabilityConfigurationResponse::DeleteObservabilityConfigurationResponse(
        const DeleteObservabilityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRunnerResponse(new DeleteObservabilityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteObservabilityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObservabilityConfigurationRequest * DeleteObservabilityConfigurationResponse::request() const
{
    Q_D(const DeleteObservabilityConfigurationResponse);
    return static_cast<const DeleteObservabilityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRunner DeleteObservabilityConfiguration \a response.
 */
void DeleteObservabilityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObservabilityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRunner::DeleteObservabilityConfigurationResponsePrivate
 * \brief The DeleteObservabilityConfigurationResponsePrivate class provides private implementation for DeleteObservabilityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a DeleteObservabilityConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteObservabilityConfigurationResponsePrivate::DeleteObservabilityConfigurationResponsePrivate(
    DeleteObservabilityConfigurationResponse * const q) : AppRunnerResponsePrivate(q)
{

}

/*!
 * Parses a AppRunner DeleteObservabilityConfiguration response element from \a xml.
 */
void DeleteObservabilityConfigurationResponsePrivate::parseDeleteObservabilityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObservabilityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRunner
} // namespace QtAws
