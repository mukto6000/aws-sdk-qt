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

#include "createclassifierresponse.h"
#include "createclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateClassifierResponse
 * \brief The CreateClassifierResponse class provides an interace for Glue CreateClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createClassifier
 */

/*!
 * Constructs a CreateClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
CreateClassifierResponse::CreateClassifierResponse(
        const CreateClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateClassifierResponsePrivate(this), parent)
{
    setRequest(new CreateClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateClassifierRequest * CreateClassifierResponse::request() const
{
    Q_D(const CreateClassifierResponse);
    return static_cast<const CreateClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateClassifier \a response.
 */
void CreateClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateClassifierResponsePrivate
 * \brief The CreateClassifierResponsePrivate class provides private implementation for CreateClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateClassifierResponsePrivate object with public implementation \a q.
 */
CreateClassifierResponsePrivate::CreateClassifierResponsePrivate(
    CreateClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateClassifier response element from \a xml.
 */
void CreateClassifierResponsePrivate::parseCreateClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
