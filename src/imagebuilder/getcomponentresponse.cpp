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

#include "getcomponentresponse.h"
#include "getcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetComponentResponse
 * \brief The GetComponentResponse class provides an interace for ImageBuilder GetComponent responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getComponent
 */

/*!
 * Constructs a GetComponentResponse object for \a reply to \a request, with parent \a parent.
 */
GetComponentResponse::GetComponentResponse(
        const GetComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetComponentResponsePrivate(this), parent)
{
    setRequest(new GetComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComponentRequest * GetComponentResponse::request() const
{
    Q_D(const GetComponentResponse);
    return static_cast<const GetComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetComponent \a response.
 */
void GetComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetComponentResponsePrivate
 * \brief The GetComponentResponsePrivate class provides private implementation for GetComponentResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetComponentResponsePrivate object with public implementation \a q.
 */
GetComponentResponsePrivate::GetComponentResponsePrivate(
    GetComponentResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetComponent response element from \a xml.
 */
void GetComponentResponsePrivate::parseGetComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
