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

#include "createdatarepositoryassociationresponse.h"
#include "createdatarepositoryassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateDataRepositoryAssociationResponse
 * \brief The CreateDataRepositoryAssociationResponse class provides an interace for FSx CreateDataRepositoryAssociation responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createDataRepositoryAssociation
 */

/*!
 * Constructs a CreateDataRepositoryAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataRepositoryAssociationResponse::CreateDataRepositoryAssociationResponse(
        const CreateDataRepositoryAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateDataRepositoryAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateDataRepositoryAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataRepositoryAssociationRequest * CreateDataRepositoryAssociationResponse::request() const
{
    Q_D(const CreateDataRepositoryAssociationResponse);
    return static_cast<const CreateDataRepositoryAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CreateDataRepositoryAssociation \a response.
 */
void CreateDataRepositoryAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataRepositoryAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateDataRepositoryAssociationResponsePrivate
 * \brief The CreateDataRepositoryAssociationResponsePrivate class provides private implementation for CreateDataRepositoryAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateDataRepositoryAssociationResponsePrivate object with public implementation \a q.
 */
CreateDataRepositoryAssociationResponsePrivate::CreateDataRepositoryAssociationResponsePrivate(
    CreateDataRepositoryAssociationResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateDataRepositoryAssociation response element from \a xml.
 */
void CreateDataRepositoryAssociationResponsePrivate::parseCreateDataRepositoryAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataRepositoryAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
