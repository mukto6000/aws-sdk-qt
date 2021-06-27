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

#include "updateappimageconfigresponse.h"
#include "updateappimageconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigResponse
 * \brief The UpdateAppImageConfigResponse class provides an interace for SageMaker UpdateAppImageConfig responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::updateAppImageConfig
 */

/*!
 * Constructs a UpdateAppImageConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppImageConfigResponse::UpdateAppImageConfigResponse(
        const UpdateAppImageConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateAppImageConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateAppImageConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppImageConfigRequest * UpdateAppImageConfigResponse::request() const
{
    return static_cast<const UpdateAppImageConfigRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateAppImageConfig \a response.
 */
void UpdateAppImageConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppImageConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigResponsePrivate
 * \brief The UpdateAppImageConfigResponsePrivate class provides private implementation for UpdateAppImageConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateAppImageConfigResponsePrivate object with public implementation \a q.
 */
UpdateAppImageConfigResponsePrivate::UpdateAppImageConfigResponsePrivate(
    UpdateAppImageConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateAppImageConfig response element from \a xml.
 */
void UpdateAppImageConfigResponsePrivate::parseUpdateAppImageConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppImageConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
