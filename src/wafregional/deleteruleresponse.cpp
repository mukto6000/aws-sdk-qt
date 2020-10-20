/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteruleresponse.h"
#include "deleteruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::DeleteRuleResponse
 * \brief The DeleteRuleResponse class provides an interace for WAFRegional DeleteRule responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::deleteRule
 */

/*!
 * Constructs a DeleteRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRuleResponse::DeleteRuleResponse(
        const DeleteRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRuleRequest * DeleteRuleResponse::request() const
{
    Q_D(const DeleteRuleResponse);
    return static_cast<const DeleteRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional DeleteRule \a response.
 */
void DeleteRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::DeleteRuleResponsePrivate
 * \brief The DeleteRuleResponsePrivate class provides private implementation for DeleteRuleResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a DeleteRuleResponsePrivate object with public implementation \a q.
 */
DeleteRuleResponsePrivate::DeleteRuleResponsePrivate(
    DeleteRuleResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional DeleteRule response element from \a xml.
 */
void DeleteRuleResponsePrivate::parseDeleteRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
