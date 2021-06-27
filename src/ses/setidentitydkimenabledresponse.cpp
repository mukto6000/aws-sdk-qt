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

#include "setidentitydkimenabledresponse.h"
#include "setidentitydkimenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetIdentityDkimEnabledResponse
 * \brief The SetIdentityDkimEnabledResponse class provides an interace for SES SetIdentityDkimEnabled responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::setIdentityDkimEnabled
 */

/*!
 * Constructs a SetIdentityDkimEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
SetIdentityDkimEnabledResponse::SetIdentityDkimEnabledResponse(
        const SetIdentityDkimEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetIdentityDkimEnabledResponsePrivate(this), parent)
{
    setRequest(new SetIdentityDkimEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetIdentityDkimEnabledRequest * SetIdentityDkimEnabledResponse::request() const
{
    return static_cast<const SetIdentityDkimEnabledRequest *>(SesResponse::request());
}

/*!
 * \reimp
 * Parses a successful SES SetIdentityDkimEnabled \a response.
 */
void SetIdentityDkimEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetIdentityDkimEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::SetIdentityDkimEnabledResponsePrivate
 * \brief The SetIdentityDkimEnabledResponsePrivate class provides private implementation for SetIdentityDkimEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a SetIdentityDkimEnabledResponsePrivate object with public implementation \a q.
 */
SetIdentityDkimEnabledResponsePrivate::SetIdentityDkimEnabledResponsePrivate(
    SetIdentityDkimEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES SetIdentityDkimEnabled response element from \a xml.
 */
void SetIdentityDkimEnabledResponsePrivate::parseSetIdentityDkimEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityDkimEnabledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
