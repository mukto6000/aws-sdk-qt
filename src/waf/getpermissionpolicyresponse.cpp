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

#include "getpermissionpolicyresponse.h"
#include "getpermissionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetPermissionPolicyResponse
 * \brief The GetPermissionPolicyResponse class provides an interace for WAF GetPermissionPolicy responses.
 *
 * \inmodule QtAwsWAF
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Classic API Reference</i> for using AWS WAF Classic with Amazon CloudFront. The AWS WAF Classic
 *  actions and data types listed in the reference are available for protecting Amazon CloudFront distributions. You can use
 *  these actions and data types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed
 *  information about the AWS WAF Classic API actions, data types, and errors. For detailed information about AWS WAF
 *  Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WafClient::getPermissionPolicy
 */

/*!
 * Constructs a GetPermissionPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetPermissionPolicyResponse::GetPermissionPolicyResponse(
        const GetPermissionPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new GetPermissionPolicyResponsePrivate(this), parent)
{
    setRequest(new GetPermissionPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPermissionPolicyRequest * GetPermissionPolicyResponse::request() const
{
    Q_D(const GetPermissionPolicyResponse);
    return static_cast<const GetPermissionPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF GetPermissionPolicy \a response.
 */
void GetPermissionPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPermissionPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::GetPermissionPolicyResponsePrivate
 * \brief The GetPermissionPolicyResponsePrivate class provides private implementation for GetPermissionPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetPermissionPolicyResponsePrivate object with public implementation \a q.
 */
GetPermissionPolicyResponsePrivate::GetPermissionPolicyResponsePrivate(
    GetPermissionPolicyResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF GetPermissionPolicy response element from \a xml.
 */
void GetPermissionPolicyResponsePrivate::parseGetPermissionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPermissionPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAF
} // namespace QtAws
