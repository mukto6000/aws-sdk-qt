// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createobservabilityconfigurationresponse.h"
#include "createobservabilityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::CreateObservabilityConfigurationResponse
 * \brief The CreateObservabilityConfigurationResponse class provides an interace for AppRunner CreateObservabilityConfiguration responses.
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
 * \sa AppRunnerClient::createObservabilityConfiguration
 */

/*!
 * Constructs a CreateObservabilityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateObservabilityConfigurationResponse::CreateObservabilityConfigurationResponse(
        const CreateObservabilityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRunnerResponse(new CreateObservabilityConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateObservabilityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateObservabilityConfigurationRequest * CreateObservabilityConfigurationResponse::request() const
{
    Q_D(const CreateObservabilityConfigurationResponse);
    return static_cast<const CreateObservabilityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRunner CreateObservabilityConfiguration \a response.
 */
void CreateObservabilityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateObservabilityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRunner::CreateObservabilityConfigurationResponsePrivate
 * \brief The CreateObservabilityConfigurationResponsePrivate class provides private implementation for CreateObservabilityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a CreateObservabilityConfigurationResponsePrivate object with public implementation \a q.
 */
CreateObservabilityConfigurationResponsePrivate::CreateObservabilityConfigurationResponsePrivate(
    CreateObservabilityConfigurationResponse * const q) : AppRunnerResponsePrivate(q)
{

}

/*!
 * Parses a AppRunner CreateObservabilityConfiguration response element from \a xml.
 */
void CreateObservabilityConfigurationResponsePrivate::parseCreateObservabilityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateObservabilityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRunner
} // namespace QtAws
