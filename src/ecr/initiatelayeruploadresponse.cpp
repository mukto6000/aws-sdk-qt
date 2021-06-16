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

#include "initiatelayeruploadresponse.h"
#include "initiatelayeruploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::InitiateLayerUploadResponse
 * \brief The InitiateLayerUploadResponse class provides an interace for ECR InitiateLayerUpload responses.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::initiateLayerUpload
 */

/*!
 * Constructs a InitiateLayerUploadResponse object for \a reply to \a request, with parent \a parent.
 */
InitiateLayerUploadResponse::InitiateLayerUploadResponse(
        const InitiateLayerUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new InitiateLayerUploadResponsePrivate(this), parent)
{
    setRequest(new InitiateLayerUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitiateLayerUploadRequest * InitiateLayerUploadResponse::request() const
{
    Q_D(const InitiateLayerUploadResponse);
    return static_cast<const InitiateLayerUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECR InitiateLayerUpload \a response.
 */
void InitiateLayerUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitiateLayerUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::InitiateLayerUploadResponsePrivate
 * \brief The InitiateLayerUploadResponsePrivate class provides private implementation for InitiateLayerUploadResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a InitiateLayerUploadResponsePrivate object with public implementation \a q.
 */
InitiateLayerUploadResponsePrivate::InitiateLayerUploadResponsePrivate(
    InitiateLayerUploadResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR InitiateLayerUpload response element from \a xml.
 */
void InitiateLayerUploadResponsePrivate::parseInitiateLayerUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateLayerUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECR
} // namespace QtAws
