// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwebaclforresourceresponse.h"
#include "getwebaclforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::GetWebACLForResourceResponse
 * \brief The GetWebACLForResourceResponse class provides an interace for WafRegional GetWebACLForResource responses.
 *
 * \inmodule QtAwsWafRegional
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
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
 *  This is the <i>AWS WAF Regional Classic API Reference</i> for using AWS WAF Classic with the AWS resources, Elastic Load
 *  Balancing (ELB) Application Load Balancers and API Gateway APIs. The AWS WAF Classic actions and data types listed in
 *  the reference are available for protecting Elastic Load Balancing (ELB) Application Load Balancers and API Gateway APIs.
 *  You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF Classic API actions, data types, and errors. For detailed
 *  information about AWS WAF Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WafRegionalClient::getWebACLForResource
 */

/*!
 * Constructs a GetWebACLForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetWebACLForResourceResponse::GetWebACLForResourceResponse(
        const GetWebACLForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafRegionalResponse(new GetWebACLForResourceResponsePrivate(this), parent)
{
    setRequest(new GetWebACLForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWebACLForResourceRequest * GetWebACLForResourceResponse::request() const
{
    Q_D(const GetWebACLForResourceResponse);
    return static_cast<const GetWebACLForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WafRegional GetWebACLForResource \a response.
 */
void GetWebACLForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWebACLForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WafRegional::GetWebACLForResourceResponsePrivate
 * \brief The GetWebACLForResourceResponsePrivate class provides private implementation for GetWebACLForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a GetWebACLForResourceResponsePrivate object with public implementation \a q.
 */
GetWebACLForResourceResponsePrivate::GetWebACLForResourceResponsePrivate(
    GetWebACLForResourceResponse * const q) : WafRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WafRegional GetWebACLForResource response element from \a xml.
 */
void GetWebACLForResourceResponsePrivate::parseGetWebACLForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWebACLForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WafRegional
} // namespace QtAws
