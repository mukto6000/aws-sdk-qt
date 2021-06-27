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

#include "disableproactiveengagementresponse.h"
#include "disableproactiveengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisableProactiveEngagementResponse
 * \brief The DisableProactiveEngagementResponse class provides an interace for Shield DisableProactiveEngagement responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::disableProactiveEngagement
 */

/*!
 * Constructs a DisableProactiveEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
DisableProactiveEngagementResponse::DisableProactiveEngagementResponse(
        const DisableProactiveEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DisableProactiveEngagementResponsePrivate(this), parent)
{
    setRequest(new DisableProactiveEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableProactiveEngagementRequest * DisableProactiveEngagementResponse::request() const
{
    return static_cast<const DisableProactiveEngagementRequest *>(ShieldResponse::request());
}

/*!
 * \reimp
 * Parses a successful Shield DisableProactiveEngagement \a response.
 */
void DisableProactiveEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableProactiveEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DisableProactiveEngagementResponsePrivate
 * \brief The DisableProactiveEngagementResponsePrivate class provides private implementation for DisableProactiveEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisableProactiveEngagementResponsePrivate object with public implementation \a q.
 */
DisableProactiveEngagementResponsePrivate::DisableProactiveEngagementResponsePrivate(
    DisableProactiveEngagementResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DisableProactiveEngagement response element from \a xml.
 */
void DisableProactiveEngagementResponsePrivate::parseDisableProactiveEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableProactiveEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
