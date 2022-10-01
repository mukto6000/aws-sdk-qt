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

#include "getinfrastructureconfigurationresponse.h"
#include "getinfrastructureconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetInfrastructureConfigurationResponse
 * \brief The GetInfrastructureConfigurationResponse class provides an interace for ImageBuilder GetInfrastructureConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getInfrastructureConfiguration
 */

/*!
 * Constructs a GetInfrastructureConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetInfrastructureConfigurationResponse::GetInfrastructureConfigurationResponse(
        const GetInfrastructureConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetInfrastructureConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetInfrastructureConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInfrastructureConfigurationRequest * GetInfrastructureConfigurationResponse::request() const
{
    Q_D(const GetInfrastructureConfigurationResponse);
    return static_cast<const GetInfrastructureConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetInfrastructureConfiguration \a response.
 */
void GetInfrastructureConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInfrastructureConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetInfrastructureConfigurationResponsePrivate
 * \brief The GetInfrastructureConfigurationResponsePrivate class provides private implementation for GetInfrastructureConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetInfrastructureConfigurationResponsePrivate object with public implementation \a q.
 */
GetInfrastructureConfigurationResponsePrivate::GetInfrastructureConfigurationResponsePrivate(
    GetInfrastructureConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetInfrastructureConfiguration response element from \a xml.
 */
void GetInfrastructureConfigurationResponsePrivate::parseGetInfrastructureConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInfrastructureConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
