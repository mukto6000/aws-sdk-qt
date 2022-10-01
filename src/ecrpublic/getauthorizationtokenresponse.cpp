// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizationtokenresponse.h"
#include "getauthorizationtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetAuthorizationTokenResponse
 * \brief The GetAuthorizationTokenResponse class provides an interace for EcrPublic GetAuthorizationToken responses.
 *
 * \inmodule QtAwsEcrPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa EcrPublicClient::getAuthorizationToken
 */

/*!
 * Constructs a GetAuthorizationTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizationTokenResponse::GetAuthorizationTokenResponse(
        const GetAuthorizationTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new GetAuthorizationTokenResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizationTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAuthorizationTokenRequest * GetAuthorizationTokenResponse::request() const
{
    Q_D(const GetAuthorizationTokenResponse);
    return static_cast<const GetAuthorizationTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic GetAuthorizationToken \a response.
 */
void GetAuthorizationTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizationTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::GetAuthorizationTokenResponsePrivate
 * \brief The GetAuthorizationTokenResponsePrivate class provides private implementation for GetAuthorizationTokenResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetAuthorizationTokenResponsePrivate object with public implementation \a q.
 */
GetAuthorizationTokenResponsePrivate::GetAuthorizationTokenResponsePrivate(
    GetAuthorizationTokenResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic GetAuthorizationToken response element from \a xml.
 */
void GetAuthorizationTokenResponsePrivate::parseGetAuthorizationTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizationTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
