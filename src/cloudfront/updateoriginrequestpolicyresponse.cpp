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

#include "updateoriginrequestpolicyresponse.h"
#include "updateoriginrequestpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateOriginRequestPolicyResponse
 * \brief The UpdateOriginRequestPolicyResponse class provides an interace for CloudFront UpdateOriginRequestPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateOriginRequestPolicy
 */

/*!
 * Constructs a UpdateOriginRequestPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateOriginRequestPolicyResponse::UpdateOriginRequestPolicyResponse(
        const UpdateOriginRequestPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateOriginRequestPolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateOriginRequestPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateOriginRequestPolicyRequest * UpdateOriginRequestPolicyResponse::request() const
{
    Q_D(const UpdateOriginRequestPolicyResponse);
    return static_cast<const UpdateOriginRequestPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateOriginRequestPolicy \a response.
 */
void UpdateOriginRequestPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateOriginRequestPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateOriginRequestPolicyResponsePrivate
 * \brief The UpdateOriginRequestPolicyResponsePrivate class provides private implementation for UpdateOriginRequestPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateOriginRequestPolicyResponsePrivate object with public implementation \a q.
 */
UpdateOriginRequestPolicyResponsePrivate::UpdateOriginRequestPolicyResponsePrivate(
    UpdateOriginRequestPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateOriginRequestPolicy response element from \a xml.
 */
void UpdateOriginRequestPolicyResponsePrivate::parseUpdateOriginRequestPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOriginRequestPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
