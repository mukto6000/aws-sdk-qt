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

#include "deleteimportresponse.h"
#include "deleteimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteImportResponse
 * \brief The DeleteImportResponse class provides an interace for LexModelsV2 DeleteImport responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteImport
 */

/*!
 * Constructs a DeleteImportResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteImportResponse::DeleteImportResponse(
        const DeleteImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteImportResponsePrivate(this), parent)
{
    setRequest(new DeleteImportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteImportRequest * DeleteImportResponse::request() const
{
    Q_D(const DeleteImportResponse);
    return static_cast<const DeleteImportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteImport \a response.
 */
void DeleteImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteImportResponsePrivate
 * \brief The DeleteImportResponsePrivate class provides private implementation for DeleteImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteImportResponsePrivate object with public implementation \a q.
 */
DeleteImportResponsePrivate::DeleteImportResponsePrivate(
    DeleteImportResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteImport response element from \a xml.
 */
void DeleteImportResponsePrivate::parseDeleteImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteImportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
