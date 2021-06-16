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

#include "associatelexbotresponse.h"
#include "associatelexbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::AssociateLexBotResponse
 * \brief The AssociateLexBotResponse class provides an interace for Connect AssociateLexBot responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an AWS service by using an endpoint. For a list of Amazon Connect endpoints, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with contact flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::associateLexBot
 */

/*!
 * Constructs a AssociateLexBotResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateLexBotResponse::AssociateLexBotResponse(
        const AssociateLexBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new AssociateLexBotResponsePrivate(this), parent)
{
    setRequest(new AssociateLexBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateLexBotRequest * AssociateLexBotResponse::request() const
{
    Q_D(const AssociateLexBotResponse);
    return static_cast<const AssociateLexBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect AssociateLexBot \a response.
 */
void AssociateLexBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateLexBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::AssociateLexBotResponsePrivate
 * \brief The AssociateLexBotResponsePrivate class provides private implementation for AssociateLexBotResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a AssociateLexBotResponsePrivate object with public implementation \a q.
 */
AssociateLexBotResponsePrivate::AssociateLexBotResponsePrivate(
    AssociateLexBotResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect AssociateLexBot response element from \a xml.
 */
void AssociateLexBotResponsePrivate::parseAssociateLexBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateLexBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
