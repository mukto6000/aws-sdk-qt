// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpublickeyconfigresponse.h"
#include "getpublickeyconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyConfigResponse
 * \brief The GetPublicKeyConfigResponse class provides an interace for CloudFront GetPublicKeyConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKeyConfig
 */

/*!
 * Constructs a GetPublicKeyConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetPublicKeyConfigResponse::GetPublicKeyConfigResponse(
        const GetPublicKeyConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetPublicKeyConfigResponsePrivate(this), parent)
{
    setRequest(new GetPublicKeyConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPublicKeyConfigRequest * GetPublicKeyConfigResponse::request() const
{
    Q_D(const GetPublicKeyConfigResponse);
    return static_cast<const GetPublicKeyConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetPublicKeyConfig \a response.
 */
void GetPublicKeyConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPublicKeyConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetPublicKeyConfigResponsePrivate
 * \brief The GetPublicKeyConfigResponsePrivate class provides private implementation for GetPublicKeyConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetPublicKeyConfigResponsePrivate object with public implementation \a q.
 */
GetPublicKeyConfigResponsePrivate::GetPublicKeyConfigResponsePrivate(
    GetPublicKeyConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetPublicKeyConfig response element from \a xml.
 */
void GetPublicKeyConfigResponsePrivate::parseGetPublicKeyConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicKeyConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
