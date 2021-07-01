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

#include "updatedistributionconfigurationresponse.h"
#include "updatedistributionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::UpdateDistributionConfigurationResponse
 * \brief The UpdateDistributionConfigurationResponse class provides an interace for imagebuilder UpdateDistributionConfiguration responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::updateDistributionConfiguration
 */

/*!
 * Constructs a UpdateDistributionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDistributionConfigurationResponse::UpdateDistributionConfigurationResponse(
        const UpdateDistributionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new UpdateDistributionConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateDistributionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDistributionConfigurationRequest * UpdateDistributionConfigurationResponse::request() const
{
    Q_D(const UpdateDistributionConfigurationResponse);
    return static_cast<const UpdateDistributionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder UpdateDistributionConfiguration \a response.
 */
void UpdateDistributionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDistributionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::UpdateDistributionConfigurationResponsePrivate
 * \brief The UpdateDistributionConfigurationResponsePrivate class provides private implementation for UpdateDistributionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a UpdateDistributionConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateDistributionConfigurationResponsePrivate::UpdateDistributionConfigurationResponsePrivate(
    UpdateDistributionConfigurationResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder UpdateDistributionConfiguration response element from \a xml.
 */
void UpdateDistributionConfigurationResponsePrivate::parseUpdateDistributionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDistributionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
